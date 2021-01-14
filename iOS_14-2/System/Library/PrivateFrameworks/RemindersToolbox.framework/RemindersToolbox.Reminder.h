/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemindersToolbox.framework/RemindersToolbox
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RemindersToolbox.Reminder : NSObject <NSSecureCoding> {

	 title;
	 isCompleted;
	 flagged;
	 locationTrigger;
	 contactTrigger;
	 subtasks;

}

@property (readonly,nonatomic) NSString * debugDescription; 
@property (readonly,nonatomic) long long hash; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

