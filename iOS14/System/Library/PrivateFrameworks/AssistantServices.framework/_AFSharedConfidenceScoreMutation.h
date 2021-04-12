/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFSharedConfidenceScoreMutating.h>

@class AFSharedConfidenceScore, NSString;

@interface _AFSharedConfidenceScoreMutation : NSObject <AFSharedConfidenceScoreMutating> {

	AFSharedConfidenceScore* _baseModel;
	NSString* _sharedUserId;
	unsigned long long _confidenceScore;
	struct {
		unsigned isDirty : 1;
		unsigned hasSharedUserId : 1;
		unsigned hasConfidenceScore : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setConfidenceScore:(unsigned long long)arg1 ;
-(void)setSharedUserId:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

