/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)encodeWithDictionary:(id)arg1 ;
@end

