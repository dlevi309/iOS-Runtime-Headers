/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSMutableDictionary;

@interface GEOPhoneNumberResolutionResultSet : NSObject {

	NSMutableDictionary* _results;

}
-(id)init;
-(id)description;
-(id)initWithXPCDictionaryRepresentation:(id)arg1 ;
-(id)xpcDictionaryRepresentation;
-(void)setResult:(id)arg1 forPhoneNumber:(id)arg2 ;
-(void)setError:(id)arg1 forPhoneNumber:(id)arg2 ;
-(void)enumerateResolutionsUsingBlock:(/*^block*/id)arg1 ;
@end

