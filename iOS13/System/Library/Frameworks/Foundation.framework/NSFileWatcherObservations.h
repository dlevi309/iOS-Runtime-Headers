/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSString;

@interface NSFileWatcherObservations : NSObject {

	BOOL _attributesChanged;
	BOOL _contentsChanged;
	BOOL _deleted;
	BOOL _moved;
	NSString* _lastObservedPath;
	BOOL _didResetPath;
	NSString* _path;

}
-(void)dealloc;
-(id)description;
-(id)initWithPath:(id)arg1 ;
-(void)addAttributeChange;
-(void)addContentsChange;
-(void)addDeletion;
-(void)addDetectedMoveToPath:(id)arg1 ;
-(void)addAnnouncedMoveToPath:(id)arg1 ;
-(void)notifyObserver:(/*^block*/id)arg1 ;
@end

