/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)updateRules;
-(BOOL)handledByDataProvider;
-(void)setUpdateRules:(BOOL)arg1 ;
-(void)setHandledByDataProvider:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

