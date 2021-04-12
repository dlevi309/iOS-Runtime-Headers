/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
*/

#import <FMF/FMFSALocation.h>

@class NSString;

@interface FMFSAMyLocation : FMFSALocation {

	BOOL isVisible;
	NSString* _username;

}

@property (assign,nonatomic) BOOL isVisible; 
@property (nonatomic,retain) NSString * username;              //@synthesize username=_username - In the implementation block
+(id)bundle;
+(id)myLocation:(BOOL)arg1 andDictionary:(id)arg2 preferredEmail:(id)arg3 ;
+(id)myLocation:(BOOL)arg1 siriLocation:(id)arg2 preferredEmail:(id)arg3 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(BOOL)isVisible;
-(void)setIsVisible:(BOOL)arg1 ;
-(id)initWithMyLocation:(BOOL)arg1 siriLocation:(id)arg2 preferredEmail:(id)arg3 ;
-(id)initWithMyLocation:(BOOL)arg1 andDictionary:(id)arg2 preferredEmail:(id)arg3 ;
-(id)prettyTimestamp;
@end

