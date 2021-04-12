/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AFDisambiguationInfo : NSObject <NSSecureCoding> {

	long long _version;
	NSArray* _history;

}

@property (nonatomic,readonly) long long version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSArray * history;                //@synthesize history=_history - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)version;
-(NSArray *)history;
-(void)setHistory:(NSArray *)arg1 ;
@end

