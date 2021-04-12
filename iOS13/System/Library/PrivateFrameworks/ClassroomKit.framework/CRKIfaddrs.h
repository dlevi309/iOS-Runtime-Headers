/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


#import <ClassroomKit/ClassroomKit-Structs.h>
@class NSString;

@interface CRKIfaddrs : NSObject {

	ifaddrs* mIfaddrs;

}

@property (getter=isInternetInterface,nonatomic,readonly) BOOL internetInterface; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * IPAddress; 
@property (nonatomic,readonly) CRKIfaddrs * next; 
-(NSString *)name;
-(CRKIfaddrs *)next;
-(NSString *)IPAddress;
-(id)initWithIfaddrs:(ifaddrs*)arg1 ;
-(BOOL)isInternetInterface;
@end

