/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)debugName;
-(void)dealloc;
-(id)initWithRecognitionSession:(id)arg1 ;
-(NSString *)transcribedTitle;
-(NSSet *)titleStrokeIdentifiers;
-(void)q_updateQueryResult;
-(void)_setTranscribedTitle:(id)arg1 strokeIdentifiers:(id)arg2 ;
@end

