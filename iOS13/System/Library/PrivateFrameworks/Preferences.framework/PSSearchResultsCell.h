/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UITableViewCell.h>

@interface PSSearchResultsCell : UITableViewCell {

	BOOL _shouldIndentContent;
	BOOL _shouldIndentSeparator;

}

@property (assign,nonatomic) BOOL shouldIndentContent;                //@synthesize shouldIndentContent=_shouldIndentContent - In the implementation block
@property (assign,nonatomic) BOOL shouldIndentSeparator;              //@synthesize shouldIndentSeparator=_shouldIndentSeparator - In the implementation block
+(id)reuseIdentifier;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setShouldIndentSeparator:(BOOL)arg1 ;
-(void)setShouldIndentContent:(BOOL)arg1 ;
-(BOOL)shouldIndentContent;
-(BOOL)shouldIndentSeparator;
@end

