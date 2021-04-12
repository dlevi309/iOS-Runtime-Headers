/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

@class WFResponse, WFTaskIdentifier;


@protocol WFLocationQuery <NSObject>
@property (readonly) WFResponse * response; 
@property (retain) WFTaskIdentifier * identifier; 
@required
-(WFTaskIdentifier *)identifier;
-(void)start;
-(void)setIdentifier:(id)arg1;
-(WFResponse *)response;

@end

