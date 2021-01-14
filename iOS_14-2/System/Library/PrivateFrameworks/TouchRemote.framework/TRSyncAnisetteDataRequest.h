/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRRequestMessage.h>

@class NSData;

@interface TRSyncAnisetteDataRequest : TRRequestMessage {

	NSData* _simData;

}

@property (nonatomic,copy) NSData * simData;              //@synthesize simData=_simData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)simData;
-(id)initWithCoder:(id)arg1 ;
-(void)setSimData:(NSData *)arg1 ;
@end

