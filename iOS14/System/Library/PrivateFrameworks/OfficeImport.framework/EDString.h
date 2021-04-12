/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDImmutableObject.h>

@class NSString, EDRunsCollection, EDPhoneticInfo;

@interface EDString : NSObject <NSCopying, EDImmutableObject> {

	NSString* mString;
	EDRunsCollection* mRuns;
	EDPhoneticInfo* mPhoneticInfo;
	BOOL mDoNotModify;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)string;
+(id)edStringWithString:(id)arg1 ;
+(id)edStringWithString:(id)arg1 runs:(id)arg2 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(void)appendString:(id)arg1 ;
-(id)init;
-(id)runs;
-(NSString *)description;
-(void)prependString:(id)arg1 ;
-(unsigned long long)hash;
-(id)string;
-(BOOL)isEmpty;
-(void)setString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRuns:(id)arg1 ;
-(BOOL)areThereRuns;
-(id)firstRunFont;
-(id)firstRunEffects;
-(void)setDoNotModify:(BOOL)arg1 ;
-(id)initWithString:(id)arg1 runs:(id)arg2 ;
-(BOOL)isEqualToEDString:(id)arg1 ;
-(void)removeCharacterAtIndex:(unsigned long long)arg1 ;
-(void)removeCharactersInSet:(id)arg1 ;
-(id)phoneticInfo;
-(void)setPhoneticInfo:(id)arg1 ;
-(id)firstFont;
@end

