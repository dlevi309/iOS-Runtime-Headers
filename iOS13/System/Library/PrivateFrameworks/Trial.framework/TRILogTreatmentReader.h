/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/


@class NSString;

@interface TRILogTreatmentReader : NSObject {

	NSString* _path;

}

@property (readonly) NSString * path;              //@synthesize path=_path - In the implementation block
+(id)readerWithProjectId:(int)arg1 ;
+(id)legacyReader;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(id)initWithProjectId:(int)arg1 ;
-(id)treatments;
@end

