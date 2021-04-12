/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithAddress:(id)arg1 ;
-(id)description;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)commentedAddress;
-(void)dealloc;
-(BOOL)isEqualToEmail:(id)arg1 ;
@end

