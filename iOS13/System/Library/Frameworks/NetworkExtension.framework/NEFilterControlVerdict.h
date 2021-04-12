/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterNewFlowVerdict.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEFilterControlVerdict : NEFilterNewFlowVerdict <NSSecureCoding, NSCopying> {

	BOOL _updateRules;
	BOOL _handledByDataProvider;

}

@property (assign) BOOL updateRules;                        //@synthesize updateRules=_updateRules - In the implementation block
@property (assign) BOOL handledByDataProvider;              //@synthesize handledByDataProvider=_handledByDataProvider - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)updateRules;
+(id)allowVerdictWithUpdateRules:(BOOL)arg1 ;
+(id)dropVerdictWithUpdateRules:(BOOL)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(long long)filterAction;
-(BOOL)updateRules;
-(BOOL)handledByDataProvider;
-(void)setUpdateRules:(BOOL)arg1 ;
-(void)setHandledByDataProvider:(BOOL)arg1 ;
@end

