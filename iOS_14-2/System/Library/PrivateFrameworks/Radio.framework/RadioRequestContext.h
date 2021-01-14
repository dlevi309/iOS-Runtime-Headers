/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSVFairPlaySAPSession;

@interface RadioRequestContext : NSObject <NSCopying> {

	SSVFairPlaySAPSession* _SAPSession;
	BOOL _usesLocalNetworking;

}

@property (setter=APSession,nonatomic,retain) SSVFairPlaySAPSession * SAPSession;              //@synthesize SAPSession=_SAPSession - In the implementation block
@property (assign,nonatomic) BOOL usesLocalNetworking;                                         //@synthesize usesLocalNetworking=_usesLocalNetworking - In the implementation block
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
-(SSVFairPlaySAPSession *)SAPSession;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)usesLocalNetworking;
-(void)setUsesLocalNetworking:(BOOL)arg1 ;
@end

