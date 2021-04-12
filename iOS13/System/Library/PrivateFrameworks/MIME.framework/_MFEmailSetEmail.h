/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/


@class NSString;

@interface _MFEmailSetEmail : NSObject {

	unsigned long long _hash;
	NSString* _encodedAddress;
	NSString* _comment;

}

@property (nonatomic,readonly) unsigned long long hash; 
@property (nonatomic,retain) NSString * address; 
@property (nonatomic,readonly) NSString * commentedAddress; 
-(void)dealloc;
-(unsigned long long)hash;
-(id)description;
-(NSString *)address;
-(id)initWithAddress:(id)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)commentedAddress;
-(BOOL)isEqualToEmail:(id)arg1 ;
@end

