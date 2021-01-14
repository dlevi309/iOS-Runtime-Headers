/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@class NSError, NSString;

@interface MFContentErrorDocument : NSObject {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                 //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * content; 
-(NSString *)content;
-(NSError *)error;
-(id)initWithMimePart:(id)arg1 ;
@end

