/*
* Generated on Thursday, January 14, 2021 at 2:22:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSBundle, NSMutableDictionary, NSString;

@interface AXCodeItem : NSObject {

	NSBundle* _cachedBundle;
	struct {
		unsigned isDyldOpened : 1;
	}  _flags;
	unsigned long long _loadedAtTimestamp;
	unsigned short _loadOrder;
	NSMutableDictionary* _platformToTarget;
	NSString* _path;
	AXCodeItem* _associatedAccessibilityCodeItem;
	long long _type;
	NSString* _name;
	long long _targetType;
	AXCodeItem* _targetCodeItem;

}

@property (assign,nonatomic) long long type;                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * path;                                                  //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * platformToTarget;                           //@synthesize platformToTarget=_platformToTarget - In the implementation block
@property (assign,nonatomic) long long targetType;                                             //@synthesize targetType=_targetType - In the implementation block
@property (assign,nonatomic) unsigned short loadOrder;                                         //@synthesize loadOrder=_loadOrder - In the implementation block
@property (assign,nonatomic,__weak) AXCodeItem * associatedAccessibilityCodeItem;              //@synthesize associatedAccessibilityCodeItem=_associatedAccessibilityCodeItem - In the implementation block
@property (assign,nonatomic,__weak) AXCodeItem * targetCodeItem;                               //@synthesize targetCodeItem=_targetCodeItem - In the implementation block
@property (nonatomic,readonly) NSString * debugCodeTypeDescription; 
@property (nonatomic,readonly) NSBundle * cachedBundle; 
@property (assign,nonatomic) BOOL isLoaded; 
@property (nonatomic,readonly) unsigned long long loadedAtTimestamp; 
@property (nonatomic,readonly) BOOL isAccessibilityBundle; 
+(id)_codeItemQueue;
+(long long)codeItemTypeFromString:(id)arg1 ;
-(void)setIsLoaded:(BOOL)arg1 ;
-(void)setTargetType:(long long)arg1 ;
-(NSBundle *)cachedBundle;
-(void)setPath:(NSString *)arg1 ;
-(void)_cacheLazyProperties;
-(BOOL)_isSystemAppAccessibilityBundle;
-(id)prepareBackingBundleIfNeeded:(id*)arg1 ;
-(id)initAccessibilityCodeItemWithPath:(id)arg1 targetType:(long long)arg2 platformToTarget:(id)arg3 loadOrder:(unsigned short)arg4 ;
-(NSString *)path;
-(void)setType:(long long)arg1 ;
-(NSString *)name;
-(id)description;
-(long long)targetType;
-(long long)type;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(AXCodeItem *)associatedAccessibilityCodeItem;
-(unsigned short)loadOrder;
-(BOOL)isAccessibilityBundle;
-(id)initWithPath:(id)arg1 isDyldOpened:(BOOL)arg2 ;
-(NSMutableDictionary *)platformToTarget;
-(void)setPlatformToTarget:(NSMutableDictionary *)arg1 ;
-(void)setLoadOrder:(unsigned short)arg1 ;
-(void)setAssociatedAccessibilityCodeItem:(AXCodeItem *)arg1 ;
-(void)setTargetCodeItem:(AXCodeItem *)arg1 ;
-(void)addPlatformToTargetEntries:(id)arg1 ;
-(void)loadWithStrategy:(long long)arg1 onQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)loadedAtTimestamp;
-(BOOL)isLoaded;
-(AXCodeItem *)targetCodeItem;
-(NSString *)debugCodeTypeDescription;
-(BOOL)isEqual:(id)arg1 ;
@end

