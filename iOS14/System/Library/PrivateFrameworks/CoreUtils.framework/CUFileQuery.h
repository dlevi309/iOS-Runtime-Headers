/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/CUDictionaryCodable.h>

@class NSString;

@interface CUFileQuery : NSObject <CUDictionaryCodable> {

	/*^block*/id _completionHandler;
	NSString* _path;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * path;                   //@synthesize path=_path - In the implementation block
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(void)encodeWithDictionary:(id)arg1 ;
-(id)completionHandler;
-(id)description;
@end

