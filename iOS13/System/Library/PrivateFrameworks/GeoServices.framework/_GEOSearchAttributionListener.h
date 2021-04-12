/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSString, NSMutableArray;

@interface _GEOSearchAttributionListener : NSObject {

	NSString* _identifier;
	NSMutableArray* _completionHandlers;
	NSMutableArray* _errorHandlers;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)handleError:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)handleInfo:(id)arg1 ;
-(void)addCompletionHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
@end

