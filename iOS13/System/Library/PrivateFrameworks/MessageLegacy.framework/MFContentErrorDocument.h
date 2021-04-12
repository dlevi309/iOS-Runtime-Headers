/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@class NSError, NSString;

@interface MFContentErrorDocument : NSObject {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                 //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * content; 
-(NSError *)error;
-(NSString *)content;
-(id)initWithMimePart:(id)arg1 ;
@end

