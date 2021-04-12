/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKDictionaryCodable.h>

@class NSError, NSDictionary;

@interface CRKErrorBox : NSObject <CRKDictionaryCodable> {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)instanceWithDictionary:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(NSError *)error;
-(NSDictionary *)dictionaryValue;
@end

