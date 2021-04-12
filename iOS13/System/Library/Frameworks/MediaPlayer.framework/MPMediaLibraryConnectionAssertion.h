/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPMediaLibrary, NSString;

@interface MPMediaLibraryConnectionAssertion : NSObject {

	MPMediaLibrary* _library;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(id)_initWithMediaLibrary:(id)arg1 identifier:(id)arg2 ;
@end

