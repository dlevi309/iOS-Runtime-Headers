/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSString, NSMutableArray;

@interface _GEOSearchAttributionListener : NSObject {

	NSString* _identifier;
	NSMutableArray* _completionHandlers;
	NSMutableArray* _errorHandlers;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)handleInfo:(id)arg1 ;
-(void)addCompletionHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)handleError:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
@end

