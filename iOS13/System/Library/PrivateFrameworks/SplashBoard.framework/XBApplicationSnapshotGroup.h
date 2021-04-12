/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, XBSnapshotContainerIdentity, NSMutableSet, NSSet;

@interface XBApplicationSnapshotGroup : NSObject <NSSecureCoding, BSDescriptionProviding> {

	NSString* _identifier;
	XBSnapshotContainerIdentity* _containerIdentity;
	NSMutableSet* _snapshots;

}

@property (copy) XBSnapshotContainerIdentity * containerIdentity;              //@synthesize containerIdentity=_containerIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerPath; 
@property (nonatomic,copy,readonly) NSSet * snapshots;                         //@synthesize snapshots=_snapshots - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)_invalidate;
-(NSString *)containerPath;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_commonInit;
-(void)addSnapshot:(id)arg1 ;
-(NSSet *)snapshots;
-(XBSnapshotContainerIdentity *)containerIdentity;
-(void)_manifestQueueDecode_setStore:(id)arg1 ;
-(void)setContainerIdentity:(XBSnapshotContainerIdentity *)arg1 ;
-(BOOL)_validateWithContainerIdentity:(id)arg1 ;
-(BOOL)removeSnapshot:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 containerIdentity:(id)arg2 ;
@end

