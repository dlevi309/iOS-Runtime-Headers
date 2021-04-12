/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@interface AXEventData : NSObject {

	AXEventDataStorage _storage;

}

@property (nonatomic,readonly) long long eventSenderIdentifier; 
@property (nonatomic,readonly) BOOL wasPostedByAccessibility; 
@property (nonatomic,readonly) char* dataBytes; 
@property (nonatomic,readonly) long long dataLength; 
+(id)dataWithBytes:(char*)arg1 length:(long long)arg2 ;
+(id)dataWithSender:(long long)arg1 ;
-(id)init;
-(char*)dataBytes;
-(long long)dataLength;
-(long long)eventSenderIdentifier;
-(BOOL)wasPostedByAccessibility;
-(id)description;
@end

