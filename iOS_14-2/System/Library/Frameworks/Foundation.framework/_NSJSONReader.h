/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSError;

@interface _NSJSONReader : NSObject {

	id input;
	int kind;
	NSError* error;

}
+(BOOL)validForJSON:(id)arg1 depth:(unsigned long long)arg2 allowFragments:(BOOL)arg3 ;
-(id)init;
-(id)parseStream:(id)arg1 options:(unsigned long long)arg2 ;
-(id)parseData:(id)arg1 options:(unsigned long long)arg2 ;
-(id)error;
-(void)dealloc;
@end

