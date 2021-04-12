/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)enumerateMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 usingBlock:(/*^block*/id)arg4 ;
-(unsigned long long)numberOfCaptureGroups;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(id)description;
-(unsigned long long)checkingTypes;
-(id)pattern;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTypes:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

