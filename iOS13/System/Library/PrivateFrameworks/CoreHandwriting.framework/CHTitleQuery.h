/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CHQuery.h>

@class NSString, NSSet;

@interface CHTitleQuery : CHQuery {

	NSString* _transcribedTitle;
	NSSet* _titleStrokeIdentifiers;

}

@property (nonatomic,copy,readonly) NSString * transcribedTitle;                 //@synthesize transcribedTitle=_transcribedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSSet * titleStrokeIdentifiers;              //@synthesize titleStrokeIdentifiers=_titleStrokeIdentifiers - In the implementation block
-(void)dealloc;
-(id)debugName;
-(id)initWithRecognitionSession:(id)arg1 ;
-(NSString *)transcribedTitle;
-(NSSet *)titleStrokeIdentifiers;
-(void)q_updateQueryResult;
-(void)_setTranscribedTitle:(id)arg1 strokeIdentifiers:(id)arg2 ;
@end

