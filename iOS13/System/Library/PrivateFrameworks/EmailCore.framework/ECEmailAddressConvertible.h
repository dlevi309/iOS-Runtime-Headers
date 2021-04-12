/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

@class ECEmailAddress, NSString;


@protocol ECEmailAddressConvertible <NSObject,NSCopying>
@property (nonatomic,readonly) ECEmailAddress * emailAddressValue; 
@property (nonatomic,readonly) NSString * stringValue; 
@required
-(NSString *)stringValue;
-(ECEmailAddress *)emailAddressValue;

@end

