/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, TIDocumentState;

@interface TICandidateRequestToken : NSObject <NSSecureCoding, NSCopying> {

	int _shiftState;
	NSUUID* _UUID;
	TIDocumentState* _documentState;

}

@property (nonatomic,readonly) NSUUID * UUID;                                //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) TIDocumentState * documentState;              //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,readonly) int shiftState;                               //@synthesize shiftState=_shiftState - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tokenForKeyboardState:(id)arg1 ;
-(TIDocumentState *)documentState;
-(NSUUID *)UUID;
-(id)init;
-(id)shortIdentifier;
-(id)initForKeyboardState:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isSameRequestAs:(id)arg1 ;
-(id)description;
-(int)shiftState;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

