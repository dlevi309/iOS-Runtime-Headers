/*
* Generated on Thursday, January 14, 2021 at 2:29:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libmecabra.dylib
*/


@class NSString;

@interface MecabraFacemarkCandidate : NSObject {

	NSString* _string;
	NSString* _category;

}

@property (nonatomic,readonly) NSString * string;                //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSString * category;              //@synthesize category=_category - In the implementation block
+(id)copyFacemarkCandidatesForLocale:(id)arg1 ;
+(id)copyFacemarkCandidatesForLanguage:(int)arg1 ;
+(id)candidateWithString:(id)arg1 category:(id)arg2 ;
-(NSString *)category;
-(id)description;
-(id)surface;
-(NSString *)string;
-(void)dealloc;
-(id)initWithString:(id)arg1 category:(id)arg2 ;
@end

