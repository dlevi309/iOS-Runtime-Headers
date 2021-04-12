/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSRegularExpression.h>

@interface NSDataDetector : NSRegularExpression {

	unsigned long long _types;

}

@property (readonly) unsigned long long checkingTypes; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)dataDetectorWithTypes:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)pattern;
-(unsigned long long)numberOfCaptureGroups;
-(void)enumerateMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)initWithTypes:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)checkingTypes;
@end

