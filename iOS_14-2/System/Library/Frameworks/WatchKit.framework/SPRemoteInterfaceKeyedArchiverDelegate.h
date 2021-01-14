/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <libobjc.A.dylib/NSKeyedArchiverDelegate.h>

@class NSString;

@interface SPRemoteInterfaceKeyedArchiverDelegate : NSObject <NSKeyedArchiverDelegate> {

	BOOL _imageIsNamed;

}

@property (assign,nonatomic) BOOL imageIsNamed;                     //@synthesize imageIsNamed=_imageIsNamed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
-(void)archiver:(id)arg1 didEncodeObject:(id)arg2 ;
-(BOOL)imageIsNamed;
-(void)setImageIsNamed:(BOOL)arg1 ;
@end

