/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFMyriadAdvertisementContextMutating.h>

@class AFMyriadAdvertisementContext, NSData, NSString;

@interface _AFMyriadAdvertisementContextMutation : NSObject <AFMyriadAdvertisementContextMutating> {

	AFMyriadAdvertisementContext* _baseModel;
	unsigned long long _generation;
	NSData* _contextData;
	double _contextFetchDelay;
	struct {
		unsigned isDirty : 1;
		unsigned hasGeneration : 1;
		unsigned hasContextData : 1;
		unsigned hasContextFetchDelay : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGeneration:(unsigned long long)arg1 ;
-(id)init;
-(void)setContextFetchDelay:(double)arg1 ;
-(void)setContextData:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

