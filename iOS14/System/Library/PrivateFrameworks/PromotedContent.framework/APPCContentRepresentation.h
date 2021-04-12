/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

#import <PromotedContent/PromotedContent-Structs.h>
#import <libobjc.A.dylib/APPCPromotableContentRepresentation.h>

@class NSString, APPCTapAction;

@interface APPCContentRepresentation : NSObject <APPCPromotableContentRepresentation> {

	 identifier;
	 adType;
	 desiredPosition;
	 privacyMarkerPosition;
	 adSize;
	 tapAction;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) long long adType; 
@property (readonly,nonatomic) long long desiredPosition; 
@property (readonly,nonatomic) long long privacyMarkerPosition; 
@property (readonly,nonatomic) CGSize adSize; 
@property (readonly,nonatomic) APPCTapAction * tapAction; 
-(id)init;
-(long long)adType;
-(CGSize)adSize;
-(void)performActionWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)identifier;
-(long long)privacyMarkerPosition;
-(long long)desiredPosition;
-(APPCTapAction *)tapAction;
@end

