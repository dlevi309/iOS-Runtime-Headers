/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
*/

@class NSString, NSDictionary;


@protocol MFUserAction
@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) long long type; 
@property (readonly,nonatomic) id<MFTimeStamp> timeStamp; 
@property (readonly,nonatomic) NSDictionary * options; 
@property (readonly,nonatomic) long long source; 
@property (readonly,nonatomic) NSString * sourceID; 
@required
-(NSDictionary *)options;
-(id<MFTimeStamp>)timeStamp;
-(long long)type;
-(NSString *)sourceID;
-(NSString *)identifier;
-(long long)source;

@end

