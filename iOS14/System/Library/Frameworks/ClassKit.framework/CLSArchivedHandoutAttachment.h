/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSURL, NSArray, NSString, CLSArchivedHandout;

@interface CLSArchivedHandoutAttachment : CLSObject <CLSRelationable> {

	int _shareType;
	int _permissionType;
	NSURL* _URL;
	NSArray* _contextPath;
	NSString* _contextSummary;
	NSString* _contextCustomTypeName;
	NSString* _title;
	NSString* _bundleIdentifier;
	NSString* _contentStoreIdentifier;
	long long _displayOrder;
	long long _contextType;
	int _type;
	NSString* _storeIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int shareType;                                  //@synthesize shareType=_shareType - In the implementation block
@property (nonatomic,readonly) int permissionType;                             //@synthesize permissionType=_permissionType - In the implementation block
@property (nonatomic,readonly) long long contextType;                          //@synthesize contextType=_contextType - In the implementation block
@property (nonatomic,readonly) long long displayOrder;                         //@synthesize displayOrder=_displayOrder - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                    //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSArray * assets; 
@property (nonatomic,readonly) NSArray * archivedAssets; 
@property (nonatomic,readonly) NSArray * contextPath;                          //@synthesize contextPath=_contextPath - In the implementation block
@property (nonatomic,readonly) NSString * contextSummary;                      //@synthesize contextSummary=_contextSummary - In the implementation block
@property (nonatomic,readonly) NSString * contextCustomTypeName;               //@synthesize contextCustomTypeName=_contextCustomTypeName - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * contentStoreIdentifier;              //@synthesize contentStoreIdentifier=_contentStoreIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * parentObjectID; 
@property (nonatomic,readonly) CLSArchivedHandout * parent; 
@property (nonatomic,readonly) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * storeIdentifier;                     //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)relations;
-(long long)contextType;
-(NSArray *)assets;
-(int)shareType;
-(void)setContextType:(long long)arg1 ;
-(void)setDisplayOrder:(long long)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(NSArray *)contextPath;
-(long long)displayOrder;
-(void)setShareType:(int)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithType:(int)arg1 title:(id)arg2 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(int)type;
-(NSURL *)URL;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSString *)storeIdentifier;
-(NSString *)title;
-(NSString *)contentStoreIdentifier;
-(NSString *)contextSummary;
-(void)setContextSummary:(NSString *)arg1 ;
-(NSString *)contextCustomTypeName;
-(void)setContextCustomTypeName:(NSString *)arg1 ;
-(void)setContentStoreIdentifier:(NSString *)arg1 ;
-(int)permissionType;
-(void)setContextPath:(NSArray *)arg1 ;
-(void)setPermissionType:(int)arg1 ;
-(NSArray *)archivedAssets;
@end

