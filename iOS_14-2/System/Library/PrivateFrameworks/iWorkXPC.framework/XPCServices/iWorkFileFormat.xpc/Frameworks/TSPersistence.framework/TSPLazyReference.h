/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TSPLazyReferenceDelegate;
@class TSPObject, TSPComponent;

@interface TSPLazyReference : NSObject <NSCopying> {

	TSPObject* _strongObject;
	TSPObject* _weakObject;
	BOOL _isWeak;
	BOOL _allowUnknownObject;
	id<TSPLazyReferenceDelegate> _delegate;
	long long _identifier;
	TSPComponent* _component;

}

@property (assign,nonatomic,__weak) id<TSPLazyReferenceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) TSPComponent * component;                           //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) TSPObject * weakObject; 
@property (nonatomic,retain) TSPObject * strongObject; 
@property (assign,nonatomic) BOOL isWeak;                                               //@synthesize isWeak=_isWeak - In the implementation block
@property (nonatomic,readonly) id object; 
@property (nonatomic,readonly) id objectIfLoaded; 
+(id)referenceForObject:(id)arg1 ;
-(id)init;
-(id<TSPLazyReferenceDelegate>)delegate;
-(id)debugDescription;
-(id)object;
-(TSPObject *)weakObject;
-(void)setDelegate:(id<TSPLazyReferenceDelegate>)arg1 ;
-(BOOL)isWeak;
-(TSPComponent *)component;
-(void)setComponent:(TSPComponent *)arg1 ;
-(unsigned long long)hash;
-(long long)identifier;
-(TSPObject *)strongObject;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)resetIdentifier;
-(void)setStrongObject:(TSPObject *)arg1 ;
-(id)initWithTSPObject:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 identifier:(long long)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 ;
-(BOOL)isEqualToLazyReference:(id)arg1 ;
-(id)objectIfLoaded;
-(BOOL)referencesObject:(id)arg1 ;
-(void)setIsWeak:(BOOL)arg1 ;
-(BOOL)discardStrongObjectIfPossible;
@end

