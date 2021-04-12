/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSError;

@interface _PHValidation : NSObject {

	unsigned long long _requestedOptions;
	unsigned long long _validatedOptions;
	NSError* _error;

}
-(id)initWithOptions:(unsigned long long)arg1 ;
-(BOOL)isValid:(id*)arg1 ;
-(void)validateOption:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)assert:(BOOL)arg1 format:(id)arg2 ;
-(void)assert:(BOOL)arg1 error:(id)arg2 ;
@end

