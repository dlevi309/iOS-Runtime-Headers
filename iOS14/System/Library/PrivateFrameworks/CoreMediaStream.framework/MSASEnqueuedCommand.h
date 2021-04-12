/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface MSASEnqueuedCommand : NSObject <NSCoding> {

	NSString* _command;
	NSDictionary* _variantParam;
	NSDictionary* _invariantParam;

}

@property (nonatomic,copy) NSString * command;                           //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) NSDictionary * variantParam;                //@synthesize variantParam=_variantParam - In the implementation block
@property (nonatomic,retain) NSDictionary * invariantParam;              //@synthesize invariantParam=_invariantParam - In the implementation block
+(id)command;
+(id)commandwithCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)command;
-(void)setCommand:(NSString *)arg1 ;
-(id)initWithCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3 ;
-(BOOL)canBeGroupedWithCommand:(id)arg1 ;
-(NSDictionary *)variantParam;
-(void)setVariantParam:(NSDictionary *)arg1 ;
-(NSDictionary *)invariantParam;
-(void)setInvariantParam:(NSDictionary *)arg1 ;
@end

