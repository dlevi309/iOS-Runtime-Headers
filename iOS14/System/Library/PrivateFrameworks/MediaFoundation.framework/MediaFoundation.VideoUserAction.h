/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
*/

#import <libobjc.A.dylib/MFUserAction.h>

@class NSString, NSDictionary;

@interface MediaFoundation.VideoUserAction : _UKNOWN_SUPERCLASS_ <MFUserAction> {

	 identifier;
	 type;
	 timeStamp;
	 options;
	 source;
	 sourceID;

}

@property (copy,nonatomic) NSString * identifier; 
@property (assign,nonatomic) long long type; 
@property (retain,nonatomic) id<MFTimeStamp> timeStamp; 
@property (copy,nonatomic) NSDictionary * options; 
@property (assign,nonatomic) long long source; 
@property (copy,nonatomic) NSString * sourceID; 
-(void)setSourceID:(NSString *)arg1 ;
-(NSDictionary *)options;
-(void)setType:(long long)arg1 ;
-(id<MFTimeStamp>)timeStamp;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setSource:(long long)arg1 ;
-(void)setTimeStamp:(id<MFTimeStamp>)arg1 ;
-(long long)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)sourceID;
-(NSString *)identifier;
-(long long)source;
@end

