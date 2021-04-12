/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/


#import <SiriUICore/SiriUICore-Structs.h>
@class NSString;

@interface _SUICAtomRanged : NSObject {

	NSString* _replacementText;
	NSRange _editRange;

}

@property (assign,nonatomic) NSRange editRange;                       //@synthesize editRange=_editRange - In the implementation block
@property (nonatomic,retain) NSString * replacementText;              //@synthesize replacementText=_replacementText - In the implementation block
+(id)atomWithEditRange:(NSRange)arg1 replacementText:(id)arg2 ;
-(id)description;
-(NSString *)replacementText;
-(NSRange)editRange;
-(void)setReplacementText:(NSString *)arg1 ;
-(void)setEditRange:(NSRange)arg1 ;
-(id)initWithEditRange:(NSRange)arg1 replacementText:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToEditScriptAtomRanged:(id)arg1 ;
@end

