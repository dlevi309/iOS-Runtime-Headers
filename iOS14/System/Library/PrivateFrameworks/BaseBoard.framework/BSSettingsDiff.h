/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@protocol BSSettingDescriptionProvider;
@class BSMutableSettings, NSMutableSet, NSString;

@interface BSSettingsDiff : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding, BSXPCCoding> {

	BSMutableSettings* _changes;
	NSMutableSet* _flagRemovals;
	NSMutableSet* _objectRemovals;
	id<BSSettingDescriptionProvider> _descriptionProvider;

}

@property (nonatomic,readonly) BOOL isEmpty; 
@property (assign,nonatomic,__weak) id<BSSettingDescriptionProvider> descriptionProvider;              //@synthesize descriptionProvider=_descriptionProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)diffFromSettings:(id)arg1 toSettings:(id)arg2 ;
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id<BSSettingDescriptionProvider>)descriptionProvider;
-(void)setDescriptionProvider:(id<BSSettingDescriptionProvider>)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)inspectChangesWithBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)applyToSettings:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isEmpty;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

