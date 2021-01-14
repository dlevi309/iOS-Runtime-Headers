/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CRKIfaddrs *)next;
-(NSString *)name;
-(NSString *)IPAddress;
-(id)initWithIfaddrs:(ifaddrs*)arg1 ;
-(BOOL)isInternetInterface;
@end

