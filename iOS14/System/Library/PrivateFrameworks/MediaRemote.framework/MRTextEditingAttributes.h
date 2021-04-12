/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface MRTextEditingAttributes : NSObject <NSCopying, NSMutableCopying> {

	NSString* _title;
	NSString* _prompt;
	MRTextInputTraits _inputTraits;

}

@property (nonatomic,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * prompt;                          //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,readonly) MRTextInputTraits inputTraits;              //@synthesize inputTraits=_inputTraits - In the implementation block
-(NSString *)prompt;
-(id)initWithTitle:(id)arg1 prompt:(id)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(MRTextInputTraits)inputTraits;
@end

