/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, MRTextEditingAttributes;

@interface MRTextEditingSession : NSObject <NSCopying, NSMutableCopying> {

	NSString* _text;
	BOOL _editing;
	MRTextEditingAttributes* _attributes;
	unsigned long long _uniqueIdentifier;

}

@property (nonatomic,readonly) unsigned long long uniqueIdentifier;               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (getter=isEditing,nonatomic,readonly) BOOL editing;                     //@synthesize editing=_editing - In the implementation block
@property (nonatomic,readonly) MRTextEditingAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(id)init;
-(unsigned long long)uniqueIdentifier;
-(BOOL)isEditing;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(MRTextEditingAttributes *)attributes;
-(id)description;
-(id)initWithText:(id)arg1 attributes:(id)arg2 ;
-(NSString *)text;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

