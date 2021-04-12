/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(id<TSPLazyReferenceDelegate>)delegate;
-(void)setDelegate:(id<TSPLazyReferenceDelegate>)arg1 ;
-(long long)identifier;
-(TSPComponent *)component;
-(void)setComponent:(TSPComponent *)arg1 ;
-(TSPObject *)weakObject;
-(TSPObject *)strongObject;
-(void)setStrongObject:(TSPObject *)arg1 ;
-(id)initWithTSPObject:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 identifier:(long long)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 ;
-(BOOL)isEqualToLazyReference:(id)arg1 ;
-(id)objectIfLoaded;
-(BOOL)referencesObject:(id)arg1 ;
-(void)setIsWeak:(BOOL)arg1 ;
-(BOOL)discardStrongObjectIfPossible;
-(void)resetIdentifier;
-(BOOL)isWeak;
@end

