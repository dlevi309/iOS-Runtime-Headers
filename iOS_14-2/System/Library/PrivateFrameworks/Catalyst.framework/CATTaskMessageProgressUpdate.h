/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/CATTaskMessage.h>

@class CATTaskProgress;

@interface CATTaskMessageProgressUpdate : CATTaskMessage {

	CATTaskProgress* _progress;

}

@property (nonatomic,copy) CATTaskProgress * progress;              //@synthesize progress=_progress - In the implementation block
+(BOOL)supportsSecureCoding;
-(CATTaskProgress *)progress;
-(id)initWithTaskUUID:(id)arg1 progress:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setProgress:(CATTaskProgress *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

