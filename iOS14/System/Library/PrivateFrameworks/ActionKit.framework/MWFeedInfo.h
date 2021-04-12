/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL;

@interface MWFeedInfo : NSObject <NSCoding> {

	NSString* title;
	NSString* link;
	NSString* summary;
	NSURL* url;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * link; 
@property (nonatomic,copy) NSString * summary; 
@property (nonatomic,copy) NSURL * url; 
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)url;
-(id)description;
-(NSString *)summary;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(NSString *)title;
@end

