/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventBaseAttributes.h>

@interface BKSHIDEventRedirectAttributes : BKSHIDEventBaseAttributes {

	int _pid;

}

@property (assign,nonatomic) int pid;              //@synthesize pid=_pid - In the implementation block
+(id)protobufSchema;
-(int)pid;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(void)setPid:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

