/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, CHTextCorrectionResult;

@interface CHStrokeGroupTextCorrectionResult : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _inputStrokeIdentifiers;
	CHTextCorrectionResult* _textCorrectionResult;

}

@property (nonatomic,copy,readonly) NSArray * inputStrokeIdentifiers;                           //@synthesize inputStrokeIdentifiers=_inputStrokeIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) CHTextCorrectionResult * textCorrectionResult;              //@synthesize textCorrectionResult=_textCorrectionResult - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSArray *)inputStrokeIdentifiers;
-(CHTextCorrectionResult *)textCorrectionResult;
-(id)initWithTextCorrectionResult:(id)arg1 inputStrokeIdentifiers:(id)arg2 ;
-(BOOL)isEqualToStrokeGroupTextCorrectionResult:(id)arg1 ;
@end

