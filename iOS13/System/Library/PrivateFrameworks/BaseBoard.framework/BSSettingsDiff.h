/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@protocol BSSettingDescriptionProvider;
@class BSMutableSettings, NSMutableSet, NSString;

@interface BSSettingsDiff : NSObject <NSCopying, NSSecureCoding, BSXPCCoding> {

	id<BSSettingDescriptionProvider> _descriptionProvider;
	BSMutableSettings* _changes;
	NSMutableSet* _flagRemovals;
	NSMutableSet* _objectRemovals;

}

@property (nonatomic,readonly) BOOL isEmpty; 
@property (assign,nonatomic,__weak) id<BSSettingDescriptionProvider> descriptionProvider;              //@synthesize descriptionProvider=_descriptionProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)_isValidRemovalsSet:(id)arg1 ;
+(id)diffFromSettings:(id)arg1 toSettings:(id)arg2 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)_initWithChanges:(id)arg1 flagRemovals:(id)arg2 objectRemovals:(id)arg3 ;
-(void)_enumerateSettingsInSet:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)allSettings;
-(unsigned long long)_diffTypesForSetting:(unsigned long long)arg1 ;
-(void)applyToSettings:(id)arg1 ;
-(void)inspectChangesWithBlock:(/*^block*/id)arg1 ;
-(id<BSSettingDescriptionProvider>)descriptionProvider;
-(void)setDescriptionProvider:(id<BSSettingDescriptionProvider>)arg1 ;
@end

