/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(TIDocumentState *)documentState;
-(int)shiftState;
-(BOOL)isSameRequestAs:(id)arg1 ;
-(id)initForKeyboardState:(id)arg1 ;
-(id)shortIdentifier;
@end

