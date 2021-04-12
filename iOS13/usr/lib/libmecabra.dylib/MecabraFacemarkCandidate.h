/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libmecabra.dylib
*/


@class NSString;

@interface MecabraFacemarkCandidate : NSObject {

	NSString* _string;
	NSString* _category;

}

@property (nonatomic,readonly) NSString * string;                //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSString * category;              //@synthesize category=_category - In the implementation block
+(id)copyFacemarkCandidatesForLanguage:(int)arg1 ;
+(id)candidateWithString:(id)arg1 category:(id)arg2 ;
+(id)copyFacemarkCandidatesForLocale:(id)arg1 ;
-(NSString *)string;
-(void)dealloc;
-(id)description;
-(NSString *)category;
-(id)surface;
-(id)initWithString:(id)arg1 category:(id)arg2 ;
@end

