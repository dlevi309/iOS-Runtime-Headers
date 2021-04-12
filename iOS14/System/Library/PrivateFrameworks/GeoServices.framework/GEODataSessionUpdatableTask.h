/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSError;


@protocol GEODataSessionUpdatableTask <NSObject>
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,retain) id<NSObject> parsedResponse; 
@required
-(id<NSObject>)parsedResponse;
-(void)setError:(id)arg1;
-(NSError *)error;
-(void)setParsedResponse:(id)arg1;

@end

