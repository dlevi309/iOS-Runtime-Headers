/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

@class WFResponse, WFTaskIdentifier;


@protocol WFLocationQuery <NSObject>
@property (readonly) WFResponse * response; 
@property (retain) WFTaskIdentifier * identifier; 
@required
-(void)start;
-(WFResponse *)response;
-(void)setIdentifier:(id)arg1;
-(WFTaskIdentifier *)identifier;

@end

